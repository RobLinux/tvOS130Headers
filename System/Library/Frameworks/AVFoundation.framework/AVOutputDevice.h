/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceInternal;

@interface AVOutputDevice : NSObject {

	AVOutputDeviceInternal* _outputDevice;

}
+(void)initialize;
+(id)sharedLocalDevice;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 ;
+(BOOL)prefersRouteDescriptors;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routingContextFactory:(id)arg2 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 routingContextFactory:(id)arg2 ;
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)deviceName;
-(id)deviceID;
-(long long)deviceType;
-(id)serialNumber;
-(id)ID;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)impl;
-(double)frecencyScore;
-(id)modelID;
-(id)manufacturer;
-(long long)deviceSubType;
-(id)firmwareVersion;
-(unsigned long long)deviceFeatures;
-(id)initWithOutputDeviceImpl:(id)arg1 ;
-(id)identifyingMACAddress;
-(float)batteryLevel;
-(id)airPlayProperties;
-(BOOL)isInUseByPairedDevice;
-(id)connectedPairedDevices;
-(BOOL)requiresAuthorization;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsBufferedAirPlay;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(BOOL)canSetVolume;
-(BOOL)canBeGrouped;
-(id)groupID;
-(BOOL)canBeGroupLeader;
-(BOOL)isGroupLeader;
-(BOOL)participatesInGroupPlayback;
-(BOOL)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(BOOL)isLogicalDeviceLeader;
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)supportsBluetoothSharing;
-(id)availableBluetoothListeningModes;
-(id)currentBluetoothListeningMode;
-(void)setCurrentBluetoothListeningMode:(id)arg1 ;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasBatteryLevel;
-(id)modelSpecificInformation;
-(void)outputDeviceImplDidChangeVolume:(id)arg1 ;
-(void)outputDeviceImplDidChangeCanChangeVolume:(id)arg1 ;
-(void)configureUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateFrecencyScore;
-(id)figEndpointOutputDeviceImpl;
@end

