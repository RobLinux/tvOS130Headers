/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:50 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/CKKSPeerProvider.h>

@class NSString, OTOperationDependencies, CKKSListenerCollection;

@interface OctagonCKKSPeerAdapter : NSObject <CKKSPeerProvider> {

	BOOL _essential;
	NSString* _providerID;
	NSString* _peerID;
	OTOperationDependencies* _deps;
	CKKSListenerCollection* _peerChangeListeners;

}

@property (retain) CKKSListenerCollection * peerChangeListeners;              //@synthesize peerChangeListeners=_peerChangeListeners - In the implementation block
@property (retain) NSString * peerID;                                         //@synthesize peerID=_peerID - In the implementation block
@property (retain) OTOperationDependencies * deps;                            //@synthesize deps=_deps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * providerID;                                   //@synthesize providerID=_providerID - In the implementation block
@property (assign) BOOL essential;                                            //@synthesize essential=_essential - In the implementation block
-(id)fetchSelfPeers:(id*)arg1 ;
-(id)fetchTrustedPeers:(id*)arg1 ;
-(void)registerForPeerChangeUpdates:(id)arg1 ;
-(void)sendSelfPeerChangedUpdate;
-(void)sendTrustedPeerSetChangedUpdate;
-(BOOL)essential;
-(void)setEssential:(BOOL)arg1 ;
-(id)initWithPeerID:(id)arg1 operationDependencies:(id)arg2 ;
-(id)fetchIdentity:(id)arg1 error:(id*)arg2 ;
-(OTOperationDependencies *)deps;
-(void)setDeps:(OTOperationDependencies *)arg1 ;
-(CKKSListenerCollection *)peerChangeListeners;
-(void)setPeerChangeListeners:(CKKSListenerCollection *)arg1 ;
-(NSString *)description;
-(NSString *)peerID;
-(NSString *)providerID;
-(void)setPeerID:(NSString *)arg1 ;
@end

