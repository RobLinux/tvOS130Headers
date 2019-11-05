/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSSavedPasswordStore, WBSAutoFillQuirksManager;

@interface WBSSavedPasswordAuditor : NSObject {

	WBSSavedPasswordStore* _savedPasswordStore;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;

}

@property (nonatomic,readonly) WBSSavedPasswordStore * savedPasswordStore;                    //@synthesize savedPasswordStore=_savedPasswordStore - In the implementation block
@property (nonatomic,readonly) WBSAutoFillQuirksManager * autoFillQuirksManager;              //@synthesize autoFillQuirksManager=_autoFillQuirksManager - In the implementation block
@property (nonatomic,readonly) BOOL passwordStoreHasDuplicatedPasswords; 
-(id)init;
-(BOOL)_savedPasswordQualifiesForReuseAuditing:(id)arg1 ;
-(BOOL)_passwordIsReused:(id)arg1 byOtherSavedPassword:(id)arg2 ;
-(id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2 ;
-(BOOL)passwordStoreHasDuplicatedPasswords;
-(BOOL)savedPasswordIsReused:(id)arg1 ;
-(id)savedPasswordsWithDuplicatedPassword:(id)arg1 ;
-(id)duplicatePasswordsInPasswords:(id)arg1 ;
-(WBSSavedPasswordStore *)savedPasswordStore;
-(WBSAutoFillQuirksManager *)autoFillQuirksManager;
@end

