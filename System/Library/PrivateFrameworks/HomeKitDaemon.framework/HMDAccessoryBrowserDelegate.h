/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDAccessoryBrowserDelegate <NSObject>
@required
-(void)accessoryBrowser:(id)arg1 didAddAccessoryAdvertisement:(id)arg2;
-(void)accessoryBrowser:(id)arg1 didRemoveAccessoryAdvertisement:(id)arg2;
-(void)accessoryBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(BOOL)arg3 stateNumber:(id)arg4 completion:(/*^block*/id)arg5;
-(void)accessoryBrowser:(id)arg1 didTombstoneAccessoryServer:(id)arg2;
-(void)accessoryBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3;
-(void)accessoryBrowser:(id)arg1 didFindAccessoryServerNeedingReprovisioning:(id)arg2 error:(id)arg3;
-(void)accessoryBrowser:(id)arg1 didFinishWACForAccessoryWithIdentifier:(id)arg2 error:(id)arg3;
-(void)accessoryBrowser:(id)arg1 didUpdateReachability:(BOOL)arg2 forBTLEAccessoriesWithServerIdentifier:(id)arg3;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didStopPairingWithError:(id)arg3;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didDiscoverAccessories:(id)arg3 transaction:(id)arg4 error:(id)arg5;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 isBlockedWithCompletionHandler:(/*^block*/id)arg3;
-(void)accessoryBrowser:(id)arg1 setupID:(id)arg2 serverIdentifier:(id)arg3 isPairedWithCompletionHandler:(/*^block*/id)arg4;
-(void)accessoryBrowser:(id)arg1 identifier:(id)arg2 reachable:(BOOL)arg3;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4 broadcast:(BOOL)arg5;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateHasPairings:(BOOL)arg3;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateCategory:(id)arg3;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateName:(id)arg3;
-(void)accessoryBrowser:(id)arg1 discoveryFailedWithError:(id)arg2 accessoryServer:(id)arg3 linkType:(long long)arg4;
-(void)accessoryBrowser:(id)arg1 didUpdateEndpoint:(id)arg2;

@end

