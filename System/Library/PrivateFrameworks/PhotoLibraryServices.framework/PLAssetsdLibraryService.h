/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <PhotoLibraryServices/PLAssetsdLibraryServiceProtocol.h>

@class PLXPCPhotoLibraryStoreContainer, PLAssetsdConnectionAuthorization, PLProgressFollower, PLPhotoLibraryBundleController, PLAssetsdService, NSString;

@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryServiceProtocol> {

	PLXPCPhotoLibraryStoreContainer* _xpcPhotoLibraryStoreContainer;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	PLProgressFollower* _preRunningProgressFollower;
	PLProgressFollower* _postRunningProgressFollower;
	PLPhotoLibraryBundleController* _libraryBundleController;
	PLAssetsdService* _assetsdService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)requiredLibraryServicesState;
-(void)launchAssetsd;
-(void)recoverFromCrashIfNeeded;
-(void)getCurrentModelVersionWithReply:(/*^block*/id)arg1 ;
-(void)createPhotoLibraryDatabaseWithReply:(/*^block*/id)arg1 ;
-(void)openPhotoLibraryDatabaseWithReply:(/*^block*/id)arg1 ;
-(id)upgradePhotoLibraryDatabaseWithOptions:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)postOpenProgressWithReply:(/*^block*/id)arg1 ;
-(void)shutdownPhotoLibraryDatabaseWithReply:(/*^block*/id)arg1 ;
-(void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(/*^block*/id)arg1 ;
-(void)importFileSystemAssetsWithReason:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)repairSingletonObjectsWithReply:(/*^block*/id)arg1 ;
-(void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)pendingEventsForRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)libraryBundle;
-(id)initWithLibraryServicesManager:(id)arg1 bundleController:(id)arg2 connectionAuthorization:(id)arg3 assetsdService:(id)arg4 ;
-(id)newLibraryOpener;
-(void)_sendClientReply:(/*^block*/id)arg1 sandboxExtensionsByPath:(id)arg2 error:(id)arg3 ;
@end

