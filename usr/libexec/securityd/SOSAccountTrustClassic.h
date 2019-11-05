/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/SOSAccountTrust.h>

@interface SOSAccountTrustClassic : SOSAccountTrust
+(id)trustClassic;
-(BOOL)isLockedError:(id)arg1 ;
-(_SecKey*)copyPublicKeyForPeer:(CFStringRef)arg1 err:(_CFError*)arg2 ;
-(int)getCircleStatusOnly:(_CFError*)arg1 ;
-(BOOL)modifyCircle:(id)arg1 err:(_CFError*)arg2 action:(/*^block*/id)arg3 ;
-(OpaqueSOSCircleRef)getCircle:(_CFError*)arg1 ;
-(BOOL)ensureFullPeerAvailable:(CFDictionaryRef)arg1 deviceID:(CFStringRef)arg2 backupKey:(CFDataRef)arg3 err:(_CFError*)arg4 ;
-(id)initWithRetirees:(id)arg1 fpi:(OpaqueSOSFullPeerInfoRef)arg2 circle:(OpaqueSOSCircleRef)arg3 departureCode:(int)arg4 peerExpansion:(id)arg5 ;
-(void)ensureOctagonPeerKeys:(id)arg1 ;
-(void)valueUnionWith:(CFStringRef)arg1 valuesToUnion:(CFSetRef)arg2 ;
-(void)valueSubtractFrom:(CFStringRef)arg1 valuesToSubtract:(CFSetRef)arg2 ;
-(BOOL)cleanupAfterPeer:(id)arg1 circleTransport:(id)arg2 seconds:(unsigned long long)arg3 circle:(OpaqueSOSCircleRef)arg4 cleanupPeer:(OpaqueSOSPeerInfoRef)arg5 err:(_CFError*)arg6 ;
-(BOOL)addiCloudIdentity:(OpaqueSOSCircleRef)arg1 key:(_SecKey*)arg2 err:(_CFError*)arg3 ;
-(BOOL)isInCircleOnly:(_CFError*)arg1 ;
-(BOOL)updateV2Dictionary:(id)arg1 v2:(CFDictionaryRef)arg2 ;
-(BOOL)resetCircleToOffering:(id)arg1 userKey:(_SecKey*)arg2 err:(_CFError*)arg3 ;
-(CFSetRef)copyPeerSetForView:(CFStringRef)arg1 ;
-(_OpaqueSOSRing*)copyRing:(CFStringRef)arg1 err:(_CFError*)arg2 ;
-(void)generationSignatureUpdateWith:(id)arg1 key:(_SecKey*)arg2 ;
-(BOOL)cleanupRetirementTickets:(id)arg1 circle:(OpaqueSOSCircleRef)arg2 time:(unsigned long long)arg3 err:(_CFError*)arg4 ;
-(unsigned long long)getDEREncodedSize:(id)arg1 err:(id*)arg2 ;
-(char*)encodeToDER:(id)arg1 err:(id*)arg2 start:(const char*)arg3 end:(char*)arg4 ;
-(CFDictionaryRef)getRings:(_CFError*)arg1 ;
-(BOOL)handleUpdateRing:(id)arg1 prospectiveRing:(_OpaqueSOSRing*)arg2 transport:(id)arg3 userPublicKey:(_SecKey*)arg4 writeUpdate:(BOOL)arg5 err:(_CFError*)arg6 ;
-(BOOL)updateCircleFromRemote:(id)arg1 newCircle:(OpaqueSOSCircleRef)arg2 err:(_CFError*)arg3 ;
-(OpaqueSOSEngineRef)getDataSourceEngine:(SOSDataSourceFactory*)arg1 ;
-(BOOL)updateFullPeerInfo:(id)arg1 minimum:(CFSetRef)arg2 excluded:(CFSetRef)arg3 ;
-(BOOL)updateViewSetsWithAnalytics:(id)arg1 enabled:(CFSetRef)arg2 disabled:(CFSetRef)arg3 parentEvent:(id)arg4 ;
-(BOOL)setRing:(_OpaqueSOSRing*)arg1 ringName:(CFStringRef)arg2 err:(_CFError*)arg3 ;
-(void)addRingDictionary;
-(BOOL)clearValueFromExpansion:(CFStringRef)arg1 err:(_CFError*)arg2 ;
-(BOOL)valueSetContainsValue:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)pendEnableViewSet:(CFSetRef)arg1 ;
-(BOOL)resetAccountToEmpty:(id)arg1 transport:(id)arg2 err:(_CFError*)arg3 ;
-(void*)getValueFromExpansion:(CFStringRef)arg1 err:(_CFError*)arg2 ;
-(BOOL)setValueInExpansion:(CFStringRef)arg1 value:(void*)arg2 err:(_CFError*)arg3 ;
-(void)setRings:(CFDictionaryRef)arg1 ;
-(BOOL)forEachRing:(/*^block*/id)arg1 ;
-(BOOL)resetRing:(id)arg1 ringName:(CFStringRef)arg2 err:(_CFError*)arg3 ;
-(BOOL)resetAccountToEmptyWithAnalytics:(id)arg1 transport:(id)arg2 parentEvent:(id)arg3 err:(_CFError*)arg4 ;
-(BOOL)resetAllRings:(id)arg1 err:(_CFError*)arg2 ;
-(BOOL)ensureExpansion:(_CFError*)arg1 ;
-(BOOL)checkForRings:(_CFError*)arg1 ;
-(BOOL)updateGestalt:(id)arg1 newGestalt:(CFDictionaryRef)arg2 ;
-(int)updateView:(id)arg1 name:(CFStringRef)arg2 code:(int)arg3 err:(_CFError*)arg4 ;
-(BOOL)activeValidInCircle:(id)arg1 err:(_CFError*)arg2 ;
-(int)viewStatus:(id)arg1 name:(CFStringRef)arg2 err:(_CFError*)arg3 ;
-(void)addSyncablePeerBlock:(id)arg1 dsName:(CFStringRef)arg2 change:(/*^block*/id)arg3 ;
-(OpaqueSOSPeerInfoRef)copyPeerWithID:(CFStringRef)arg1 err:(_CFError*)arg2 ;
-(BOOL)isAccountIdentity:(OpaqueSOSPeerInfoRef)arg1 err:(_CFError*)arg2 ;
-(CFSetRef)copyPeerSetMatching:(/*^block*/id)arg1 ;
-(CFArrayRef)copyPeersToListenTo:(_SecKey*)arg1 err:(_CFError*)arg2 ;
-(BOOL)peerSignatureUpdate:(_SecKey*)arg1 err:(_CFError*)arg2 ;
-(BOOL)updatePeerInfo:(id)arg1 description:(CFStringRef)arg2 err:(_CFError*)arg3 update:(/*^block*/id)arg4 ;
-(void)removeInvalidApplications:(OpaqueSOSCircleRef)arg1 userPublic:(_SecKey*)arg2 ;
-(BOOL)upgradeiCloudIdentity:(OpaqueSOSCircleRef)arg1 privKey:(_SecKey*)arg2 ;
-(CFSetRef)copyPreApprovedHSA2Info;
-(BOOL)addEscrowToPeerInfo:(OpaqueSOSFullPeerInfoRef)arg1 err:(_CFError*)arg2 ;
-(CFArrayRef)copySortedPeerArray:(_CFError*)arg1 action:(/*^block*/id)arg2 ;
-(CFSetRef)syncWithPeers:(id)arg1 peerIDs:(CFSetRef)arg2 err:(_CFError*)arg3 ;
-(BOOL)requestSyncWithAllPeers:(id)arg1 key:(_SecKey*)arg2 err:(_CFError*)arg3 ;
-(BOOL)isSyncingV0;
-(BOOL)postDebugScope:(id)arg1 scope:(void*)arg2 err:(_CFError*)arg3 ;
-(_SecKey*)copyDeviceKey:(_CFError*)arg1 ;
-(BOOL)removeIncompleteiCloudIdentities:(OpaqueSOSCircleRef)arg1 privKey:(_SecKey*)arg2 err:(_CFError*)arg3 ;
-(BOOL)clientPing:(id)arg1 ;
-(void)resetRingDictionary;
-(void)forEachCirclePeerExceptMe:(/*^block*/id)arg1 ;
-(BOOL)hasCircle:(_CFError*)arg1 ;
-(OpaqueSOSCircleRef)ensureCircle:(id)arg1 name:(CFStringRef)arg2 err:(_CFError*)arg3 ;
-(BOOL)ghostBustingOK:(OpaqueSOSCircleRef)arg1 updatingTo:(OpaqueSOSCircleRef)arg2 ;
-(BOOL)leaveCircleWithAccount:(id)arg1 withAnalytics:(id)arg2 err:(_CFError*)arg3 ;
-(BOOL)leaveCircle:(id)arg1 err:(_CFError*)arg2 ;
-(BOOL)resetToOffering:(id)arg1 key:(_SecKey*)arg2 err:(_CFError*)arg3 ;
-(BOOL)joinCircle:(id)arg1 userKey:(_SecKey*)arg2 useCloudPeer:(BOOL)arg3 err:(_CFError*)arg4 ;
-(BOOL)checkForSponsorshipTrust:(OpaqueSOSCircleRef)arg1 ;
-(int)thisDeviceStatusInCircle:(OpaqueSOSCircleRef)arg1 peer:(OpaqueSOSPeerInfoRef)arg2 ;
-(BOOL)handleUpdateCircle:(OpaqueSOSCircleRef)arg1 transport:(id)arg2 update:(BOOL)arg3 err:(_CFError*)arg4 ;
-(BOOL)updateCircle:(id)arg1 newCircle:(OpaqueSOSCircleRef)arg2 err:(_CFError*)arg3 ;
-(BOOL)haveConfirmedOctagonKeys;
-(_SecKey*)randomPermanentFullECKey:(int)arg1 name:(id)arg2 error:(_CFError*)arg3 ;
-(OpaqueSOSFullPeerInfoRef)getMyFullPeerInfo;
-(BOOL)fullPeerInfoVerify:(_SecKey*)arg1 err:(_CFError*)arg2 ;
-(BOOL)hasFullPeerInfo:(_CFError*)arg1 ;
-(OpaqueSOSFullPeerInfoRef)CopyAccountIdentityPeerInfo;
-(BOOL)isMyPeerActive:(_CFError*)arg1 ;
-(void)purgeIdentity;
-(id)init;
-(BOOL)hasLeft;
@end

