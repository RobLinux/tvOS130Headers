/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AADataclassManager : NSObject
+(id)sharedManager;
+(id)appBundleIdentifierDictionary;
-(id)whitelistedDataclassesForAppleAccountClassBasic;
-(id)whitelistedDataclassesForAppleAccountClassFull;
-(BOOL)shouldProvisionDataclass:(id)arg1 forAccount:(id)arg2 ;
-(id)appBundleIdentifierForDataclass:(id)arg1 ;
-(BOOL)_hideDataclassWhenAppRemoved:(id)arg1 ;
-(id)_userVisibleDataclasses;
-(BOOL)_isRestrictedForDataclass:(id)arg1 ;
-(BOOL)_isRunningInStoreDemoMode;
-(BOOL)isSystemAppRestrictedOrRemovedForDataclass:(id)arg1 ;
-(BOOL)_shouldProvisionNotesForAccount:(id)arg1 ;
-(id)_filteredDataclassesForAccountClass:(id)arg1 ;
-(id)blackListedMacOSDataclasses;
-(id)filteredServerProvidedFeatures:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)shouldAutoEnableDataclass:(id)arg1 forAccount:(id)arg2 ;
-(void)attemptToEnableDataclasses:(id)arg1 forAccount:(id)arg2 inStore:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

