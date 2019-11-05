/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ACCPlatformDigitalAudioManager : NSObject {

	BOOL _bDigAudSendNewProp;
	BOOL _bDigAudIsActive;
	int _digAudSampleEnum;
	unsigned _digAudSampleMask;
	unsigned _digAudVolumeLevel;
	unsigned _digAudSoundCheck;
	NSString* _digAudEndpointUUID;

}

@property (nonatomic,retain) NSString * digAudEndpointUUID;              //@synthesize digAudEndpointUUID=_digAudEndpointUUID - In the implementation block
@property (assign,nonatomic) int digAudSampleEnum;                       //@synthesize digAudSampleEnum=_digAudSampleEnum - In the implementation block
@property (assign,nonatomic) unsigned digAudSampleMask;                  //@synthesize digAudSampleMask=_digAudSampleMask - In the implementation block
@property (assign,nonatomic) unsigned digAudVolumeLevel;                 //@synthesize digAudVolumeLevel=_digAudVolumeLevel - In the implementation block
@property (assign,nonatomic) unsigned digAudSoundCheck;                  //@synthesize digAudSoundCheck=_digAudSoundCheck - In the implementation block
@property (assign,nonatomic) BOOL bDigAudSendNewProp;                    //@synthesize bDigAudSendNewProp=_bDigAudSendNewProp - In the implementation block
@property (assign,nonatomic) BOOL bDigAudIsActive;                       //@synthesize bDigAudIsActive=_bDigAudIsActive - In the implementation block
+(id)getManager;
+(unsigned)sampleRateValueFromEnum:(int)arg1 ;
+(int)sampleRateEnumFromValue:(unsigned)arg1 ;
+(unsigned)sampleRateMaskFromEnum:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)updateSampleRate:(unsigned)arg1 ;
-(void)setDigAudEndpointUUID:(NSString *)arg1 ;
-(void)setDigAudSampleMask:(unsigned)arg1 ;
-(NSString *)digAudEndpointUUID;
-(unsigned)digAudSampleMask;
-(void)setBDigAudSendNewProp:(BOOL)arg1 ;
-(void)setBDigAudIsActive:(BOOL)arg1 ;
-(void)sendAudioStateChangedNotification;
-(BOOL)bDigAudIsActive;
-(int)digAudSampleEnum;
-(unsigned)digAudVolumeLevel;
-(unsigned)digAudSoundCheck;
-(BOOL)bDigAudSendNewProp;
-(void)setDigAudSampleEnum:(int)arg1 ;
-(BOOL)newAudioPropertyNotification;
-(void)setDigAudVolumeLevel:(unsigned)arg1 ;
-(void)setDigAudSoundCheck:(unsigned)arg1 ;
-(BOOL)setDigitalAudioEndpointUUID:(id)arg1 withSupportedSampleRates:(unsigned)arg2 ;
-(void)startAudioPropertyNotifications;
-(void)stopAudioPropertyNotifications;
-(unsigned)currentSampleRate;
-(unsigned)convertToSupportedSampleRate:(unsigned)arg1 ;
-(void)updateVolumeLevel:(unsigned)arg1 ;
-(void)updateSoundCheck:(unsigned)arg1 ;
-(id)supportedSampleRatesList;
@end

