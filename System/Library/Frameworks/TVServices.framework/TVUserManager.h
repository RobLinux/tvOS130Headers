/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TVUserManager : NSObject

@property (nonatomic,readonly) NSString * currentUserIdentifier; 
@property (nonatomic,copy) NSArray * userIdentifiersForCurrentProfile; 
-(id)init;
-(NSString *)currentUserIdentifier;
-(NSArray *)userIdentifiersForCurrentProfile;
-(void)setUserIdentifiersForCurrentProfile:(NSArray *)arg1 ;
-(void)presentProfilePreferencePanelWithCurrentSettings:(id)arg1 availableProfiles:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldStorePreferenceForCurrentUserToProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

