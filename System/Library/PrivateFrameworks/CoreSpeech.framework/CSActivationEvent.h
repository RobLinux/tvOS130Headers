/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CSActivationEvent : NSObject {

	float _vadScore;
	NSString* _UUID;
	unsigned long long _type;
	NSString* _deviceId;
	NSDictionary* _activationInfo;
	unsigned long long _hosttime;

}

@property (nonatomic,readonly) NSString * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * deviceId;                            //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,retain) NSDictionary * activationInfo;                  //@synthesize activationInfo=_activationInfo - In the implementation block
@property (assign,nonatomic) unsigned long long hosttime;                    //@synthesize hosttime=_hosttime - In the implementation block
@property (assign,nonatomic) float vadScore;                                 //@synthesize vadScore=_vadScore - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription; 
+(id)builtInMicVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2 ;
+(id)remoteMicVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3 ;
+(id)remoteMicVADEvent:(id)arg1 vadScore:(float)arg2 hostTime:(unsigned long long)arg3 ;
+(id)jarvisVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3 ;
+(id)mediaserverdLaunchedEvent:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)UUID;
-(NSString *)deviceId;
-(void)setDeviceId:(NSString *)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(id)xpcObject;
-(float)vadScore;
-(NSDictionary *)activationInfo;
-(unsigned long long)hosttime;
-(id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 vadScore:(float)arg4 hosttime:(unsigned long long)arg5 ;
-(id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 hosttime:(unsigned long long)arg4 ;
-(id)_activationTypeString;
-(void)setActivationInfo:(NSDictionary *)arg1 ;
-(void)setHosttime:(unsigned long long)arg1 ;
-(void)setVadScore:(float)arg1 ;
@end

