/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/NSSecureCoding.h>

@class NSURL;

@interface AVAudioDeviceTestProcessingChain : NSObject <NSSecureCoding> {

	NSURL* _graphURL;
	NSURL* _processingStripURL;

}

@property (nonatomic,retain) NSURL * graphURL;                        //@synthesize graphURL=_graphURL - In the implementation block
@property (nonatomic,retain) NSURL * processingStripURL;              //@synthesize processingStripURL=_processingStripURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)graphURL;
-(void)setGraphURL:(NSURL *)arg1 ;
-(NSURL *)processingStripURL;
-(void)setProcessingStripURL:(NSURL *)arg1 ;
@end

