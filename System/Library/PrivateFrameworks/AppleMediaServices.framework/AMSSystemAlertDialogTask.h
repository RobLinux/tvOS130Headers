/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest;

@interface AMSSystemAlertDialogTask : AMSTask {

	BOOL _dismissOnHomeButton;
	BOOL _dismissOnLock;
	BOOL _shouldDismissAfterUnlock;
	BOOL _shouldDisplayAsTopMost;
	BOOL _shouldPendInSetupIfNotAllowed;
	BOOL _displaysOnLockscreen;
	AMSDialogRequest* _request;
	long long _defaultButtonIndex;
	long long _unlockActionButtonIndex;

}

@property (assign) long long defaultButtonIndex;                        //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
@property (assign) BOOL dismissOnHomeButton;                            //@synthesize dismissOnHomeButton=_dismissOnHomeButton - In the implementation block
@property (assign) BOOL dismissOnLock;                                  //@synthesize dismissOnLock=_dismissOnLock - In the implementation block
@property (assign) BOOL shouldDismissAfterUnlock;                       //@synthesize shouldDismissAfterUnlock=_shouldDismissAfterUnlock - In the implementation block
@property (assign) BOOL shouldDisplayAsTopMost;                         //@synthesize shouldDisplayAsTopMost=_shouldDisplayAsTopMost - In the implementation block
@property (assign) BOOL shouldPendInSetupIfNotAllowed;                  //@synthesize shouldPendInSetupIfNotAllowed=_shouldPendInSetupIfNotAllowed - In the implementation block
@property (assign) BOOL displaysOnLockscreen;                           //@synthesize displaysOnLockscreen=_displaysOnLockscreen - In the implementation block
@property (assign) long long unlockActionButtonIndex;                   //@synthesize unlockActionButtonIndex=_unlockActionButtonIndex - In the implementation block
@property (nonatomic,readonly) AMSDialogRequest * request;              //@synthesize request=_request - In the implementation block
-(AMSDialogRequest *)request;
-(id)present;
-(id)initWithRequest:(id)arg1 ;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(long long)defaultButtonIndex;
-(long long)unlockActionButtonIndex;
-(BOOL)displaysOnLockscreen;
-(BOOL)dismissOnHomeButton;
-(BOOL)dismissOnLock;
-(BOOL)shouldDisplayAsTopMost;
-(BOOL)shouldDismissAfterUnlock;
-(BOOL)shouldPendInSetupIfNotAllowed;
-(void)setDismissOnHomeButton:(BOOL)arg1 ;
-(void)setDismissOnLock:(BOOL)arg1 ;
-(void)setShouldDismissAfterUnlock:(BOOL)arg1 ;
-(void)setShouldDisplayAsTopMost:(BOOL)arg1 ;
-(void)setShouldPendInSetupIfNotAllowed:(BOOL)arg1 ;
-(void)setUnlockActionButtonIndex:(long long)arg1 ;
-(void)setDisplaysOnLockscreen:(BOOL)arg1 ;
-(id)_reorderButtonActions;
-(CFDictionaryRef)_createNoteDictionaryWithKeys:(ButtonKey*)arg1 buttonActions:(id)arg2 outOptions:(unsigned long long*)arg3 ;
-(CFUserNotificationRef)_createNotificationFromDictionary:(CFDictionaryRef)arg1 options:(unsigned long long)arg2 ;
-(id)_handleResponseForNote:(CFUserNotificationRef)arg1 buttonActions:(id)arg2 keys:(ButtonKey*)arg3 ;
-(long long)_keyboardTypeFor:(long long)arg1 ;
-(long long)_defaultButtonIndexForActions:(id)arg1 ;
@end

