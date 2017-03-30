//
//  ExtAudioFileMixer.h
//  HMAVAudoTools
//
//  Created by yang shuo on 2017/3/30.
//  Copyright © 2017年 itheima. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ExtAudioFileMixer : NSObject

+ (OSStatus)mixAudio:(NSString *)audioPath1
            andAudio:(NSString *)audioPath2
              toFile:(NSString *)outputPath
  preferedSampleRate:(float)sampleRate;

@end
