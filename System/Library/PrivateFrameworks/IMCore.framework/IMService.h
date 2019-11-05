/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCore/IMCore-Structs.h>
@interface IMService : NSObject
+(id)callService;
+(id)facetimeService;
+(id)notificationCenter;
+(id)iMessageService;
+(id)smsService;
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(id)allServices;
+(id)allServicesNonBlocking;
+(id)serviceWithName:(id)arg1 ;
+(id)myIdleTime;
+(unsigned long long)myStatus;
+(BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2 ;
+(unsigned long long)statusForIMPerson:(id)arg1 ;
+(unsigned long long)statusForABPerson:(id)arg1 ;
+(id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2 ;
+(id)aimService;
+(id)subnetService;
+(id)jabberService;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedName;
-(id)localizedShortName;
-(unsigned long long)status;
-(BOOL)isEnabled;
-(void)login;
-(void)logout;
-(BOOL)initialSyncPerformed;
-(id)infoForScreenName:(id)arg1 ;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)canonicalFormOfID:(id)arg1 ;
-(id)peopleWithScreenName:(id)arg1 ;
-(id)screenNamesForPerson:(id)arg1 ;
-(id)myScreenNames;
-(id)infoForPerson:(id)arg1 ;
-(id)infoForAllPeople;
-(id)infoForDisplayedPeople;
@end

