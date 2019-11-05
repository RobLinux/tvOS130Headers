/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSDate, NSString;

@interface VSPreferencesInterface : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) NSDate * lastTTSRequestDate; 
@property (nonatomic,readonly) NSString * deviceUUID; 
+(id)defaultInstance;
-(id)initWithSuiteName:(id)arg1 ;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSString *)deviceUUID;
-(id)autoDownloadedVoicesForClientID:(id)arg1 ;
-(void)migrateDefaults;
-(void)setAutoDownloadedVoices:(id)arg1 withClientID:(id)arg2 ;
-(void)setLastTTSRequestDate:(NSDate *)arg1 ;
-(NSDate *)lastTTSRequestDate;
@end

