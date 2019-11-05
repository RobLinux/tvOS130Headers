/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/XPCServices/AVAudioDeviceTestService.xpc/AVAudioDeviceTestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVAudioDeviceTestService/NSSecureCoding.h>

@class NSData;

@interface AVAudioDeviceTestResult : NSObject <NSSecureCoding> {

	long long _inputID;
	long long _outputID;
	NSData* _data;
	double _sampleRate;
	double _correlationValue;

}

@property (assign,nonatomic) long long outputID;                   //@synthesize outputID=_outputID - In the implementation block
@property (assign,nonatomic) long long inputID;                    //@synthesize inputID=_inputID - In the implementation block
@property (assign,nonatomic) double sampleRate;                    //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) double correlationValue;              //@synthesize correlationValue=_correlationValue - In the implementation block
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(double)sampleRate;
-(id)initWithData:(id)arg1 inputID:(long long)arg2 outputID:(long long)arg3 sampleRate:(double)arg4 correlationValue:(double)arg5 ;
-(long long)inputID;
-(void)setInputID:(long long)arg1 ;
-(long long)outputID;
-(void)setOutputID:(long long)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(double)correlationValue;
-(void)setCorrelationValue:(double)arg1 ;
@end

