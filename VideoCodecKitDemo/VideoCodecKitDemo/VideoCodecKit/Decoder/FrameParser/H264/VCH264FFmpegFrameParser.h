//
//  VCH264FFmpegFrameParser.h
//  VideoCodecKitDemo
//
//  Created by CmST0us on 2018/9/9.
//  Copyright © 2018年 eric3u. All rights reserved.
//

#import <libavcodec/avcodec.h>

#import "VCH264FrameParser.h"
NS_ASSUME_NONNULL_BEGIN
@interface VCH264FFmpegFrameParser : VCH264FrameParser
@property (nonatomic, readonly)AVCodecContext *codecContext;
@end
NS_ASSUME_NONNULL_END

