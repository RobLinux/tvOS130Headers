/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSReceiverPreferences, NSSet;

@interface CSRecieverState : NSObject {

	int _notifyToken;
	CSReceiverPreferences* _receiverPreferences;
	NSSet* _enabledBundleIdentifiers;
	NSSet* _disabledBundleIdentifiers;

}

@property (nonatomic,readonly) CSReceiverPreferences * receiverPreferences;              //@synthesize receiverPreferences=_receiverPreferences - In the implementation block
@property (nonatomic,readonly) NSSet * enabledBundleIdentifiers;                         //@synthesize enabledBundleIdentifiers=_enabledBundleIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * disabledBundleIdentifiers;                        //@synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                          //@synthesize notifyToken=_notifyToken - In the implementation block
+(id)sharedInstance;
-(id)init;
-(int)notifyToken;
-(void)_updateFromPreferences;
-(BOOL)checkBundleIdentifier:(id)arg1 ;
-(CSReceiverPreferences *)receiverPreferences;
-(NSSet *)enabledBundleIdentifiers;
-(NSSet *)disabledBundleIdentifiers;
@end

