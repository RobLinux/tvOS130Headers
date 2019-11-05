/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <VoiceShortcuts/NSXPCListenerDelegate.h>
#import <VoiceShortcuts/NSXPCConnectionDelegate.h>

@protocol VCDatabaseProvider, VCSyncDataEndpoint;
@class VCCoreDuetListener, VCVoiceShortcutManager, WFTriggerManager, NSXPCListener, NSXPCListenerEndpoint, NSString;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate> {

	BOOL _skipEntitlementsCheck;
	os_unfair_lock_s _migrationLock;
	VCCoreDuetListener* _coreDuetListener;
	VCVoiceShortcutManager* _voiceShortcutManager;
	WFTriggerManager* _triggerManager;
	NSXPCListener* _xpcListener;
	id<VCDatabaseProvider> _databaseProvider;
	id<VCSyncDataEndpoint> _syncDataEndpoint;

}

@property (nonatomic,readonly) BOOL skipEntitlementsCheck;                                 //@synthesize skipEntitlementsCheck=_skipEntitlementsCheck - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s migrationLock;                             //@synthesize migrationLock=_migrationLock - In the implementation block
@property (nonatomic,readonly) NSXPCListener * xpcListener;                                //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                    //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCCoreDuetListener * coreDuetListener;                      //@synthesize coreDuetListener=_coreDuetListener - In the implementation block
@property (nonatomic,readonly) id<VCSyncDataEndpoint> syncDataEndpoint;                    //@synthesize syncDataEndpoint=_syncDataEndpoint - In the implementation block
@property (nonatomic,readonly) WFTriggerManager * triggerManager;                          //@synthesize triggerManager=_triggerManager - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (nonatomic,readonly) VCVoiceShortcutManager * voiceShortcutManager;              //@synthesize voiceShortcutManager=_voiceShortcutManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(NSXPCListener *)xpcListener;
-(id<VCDatabaseProvider>)databaseProvider;
-(id)initWithDatabaseProvider:(id)arg1 coreDuetListener:(id)arg2 syncDataEndpoint:(id)arg3 ;
-(id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg1 ;
-(id)initWithXPCListener:(id)arg1 databaseProvider:(id)arg2 coreDuetListener:(id)arg3 syncDataEndpoint:(id)arg4 ;
-(VCVoiceShortcutManager *)voiceShortcutManager;
-(VCCoreDuetListener *)coreDuetListener;
-(WFTriggerManager *)triggerManager;
-(BOOL)skipEntitlementsCheck;
-(os_unfair_lock_s)migrationLock;
-(id<VCSyncDataEndpoint>)syncDataEndpoint;
@end

