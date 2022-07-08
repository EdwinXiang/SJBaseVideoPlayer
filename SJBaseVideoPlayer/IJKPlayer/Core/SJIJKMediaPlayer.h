//
//  SJIJKMediaPlayer.h
//  SJVideoPlayer_Example
//
//  Created by BlueDancer on 2019/10/12.
//  Copyright © 2019 changsanjiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include(<IJKMediaFrameworkWithSSL/IJKMediaFrameworkWithSSL.h>)
#import <IJKMediaFrameworkWithSSL/IJKMediaFrameworkWithSSL.h>
#elif __has_include(<IJKMediaFramework/IJKMediaFramework.h>)
#import <IJKMediaFramework/IJKMediaFramework.h>
#else
#import "IJKMediaFramework.h"
#endif
#import "SJMediaPlaybackController.h"

NS_ASSUME_NONNULL_BEGIN
FOUNDATION_EXTERN NSErrorDomain const SJIJKMediaPlayerErrorDomain;

@interface SJIJKMediaPlayer : IJKFFMoviePlayerController<SJMediaPlayer>
- (instancetype)initWithURL:(NSURL *)URL startPosition:(NSTimeInterval)startPosition options:(IJKFFOptions *)ops;

@property (nonatomic, readonly, strong) NSURL *URL;

@property (nonatomic) NSTimeInterval trialEndPosition;

@property (nonatomic) BOOL pauseWhenAppDidEnterBackground;

@property (nonatomic, readonly) BOOL firstVideoFrameRendered;
@end
NS_ASSUME_NONNULL_END
