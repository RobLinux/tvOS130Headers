/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OctagonStateFlagHandler, OTSOSAdapter, CKKSPeerProvider, OTAuthKitAdapter, NSXPCProxyCreating;
@class NSString, OTCuttlefishAccountStateHolder, CKKSViewManager, CKKSLockStateTracker;

@interface OTOperationDependencies : NSObject {

	NSString* _containerName;
	NSString* _contextID;
	OTCuttlefishAccountStateHolder* _stateHolder;
	id<OctagonStateFlagHandler> _flagHandler;
	id<OTSOSAdapter> _sosAdapter;
	id<CKKSPeerProvider> _octagonAdapter;
	id<OTAuthKitAdapter> _authKitAdapter;
	id<NSXPCProxyCreating> _cuttlefishXPC;
	CKKSViewManager* _viewManager;
	CKKSLockStateTracker* _lockStateTracker;
	Class _escrowRequestClass;

}

@property (retain) NSString * containerName;                                  //@synthesize containerName=_containerName - In the implementation block
@property (retain) NSString * contextID;                                      //@synthesize contextID=_contextID - In the implementation block
@property (retain) OTCuttlefishAccountStateHolder * stateHolder;              //@synthesize stateHolder=_stateHolder - In the implementation block
@property (retain) id<OctagonStateFlagHandler> flagHandler;                   //@synthesize flagHandler=_flagHandler - In the implementation block
@property (retain) id<OTSOSAdapter> sosAdapter;                               //@synthesize sosAdapter=_sosAdapter - In the implementation block
@property (retain) id<CKKSPeerProvider> octagonAdapter;                       //@synthesize octagonAdapter=_octagonAdapter - In the implementation block
@property (retain) id<OTAuthKitAdapter> authKitAdapter;                       //@synthesize authKitAdapter=_authKitAdapter - In the implementation block
@property (retain) id<NSXPCProxyCreating> cuttlefishXPC;                      //@synthesize cuttlefishXPC=_cuttlefishXPC - In the implementation block
@property (retain) CKKSViewManager * viewManager;                             //@synthesize viewManager=_viewManager - In the implementation block
@property (retain) CKKSLockStateTracker * lockStateTracker;                   //@synthesize lockStateTracker=_lockStateTracker - In the implementation block
@property (retain) Class escrowRequestClass;                                  //@synthesize escrowRequestClass=_escrowRequestClass - In the implementation block
-(CKKSViewManager *)viewManager;
-(id<NSXPCProxyCreating>)cuttlefishXPC;
-(void)setCuttlefishXPC:(id<NSXPCProxyCreating>)arg1 ;
-(CKKSLockStateTracker *)lockStateTracker;
-(void)setLockStateTracker:(CKKSLockStateTracker *)arg1 ;
-(OTCuttlefishAccountStateHolder *)stateHolder;
-(id<OTSOSAdapter>)sosAdapter;
-(id<OTAuthKitAdapter>)authKitAdapter;
-(Class)escrowRequestClass;
-(id<OctagonStateFlagHandler>)flagHandler;
-(id<CKKSPeerProvider>)octagonAdapter;
-(void)setAuthKitAdapter:(id<OTAuthKitAdapter>)arg1 ;
-(void)setSosAdapter:(id<OTSOSAdapter>)arg1 ;
-(void)setOctagonAdapter:(id<CKKSPeerProvider>)arg1 ;
-(id)initForContainer:(id)arg1 contextID:(id)arg2 stateHolder:(id)arg3 flagHandler:(id)arg4 sosAdapter:(id)arg5 octagonAdapter:(id)arg6 authKitAdapter:(id)arg7 viewManager:(id)arg8 lockStateTracker:(id)arg9 cuttlefishXPC:(id)arg10 escrowRequestClass:(Class)arg11 ;
-(void)setStateHolder:(OTCuttlefishAccountStateHolder *)arg1 ;
-(void)setFlagHandler:(id<OctagonStateFlagHandler>)arg1 ;
-(void)setViewManager:(CKKSViewManager *)arg1 ;
-(void)setEscrowRequestClass:(Class)arg1 ;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(NSString *)contextID;
-(void)setContextID:(NSString *)arg1 ;
@end
