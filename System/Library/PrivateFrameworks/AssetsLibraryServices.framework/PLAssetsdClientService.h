/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLAssetsdClientServiceProtocol.h>

@class NSMutableArray, NSString;

@interface PLAssetsdClientService : NSObject <PLAssetsdClientServiceProtocol> {

	NSMutableArray* _libraryUnavailabilityHandlers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(BOOL)arg3 data:(id)arg4 error:(id)arg5 ;
-(void)downloadFinishedForIdentifier:(id)arg1 success:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)assetAvailableForIdentifier:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)resourceURLReceivedForIdentifier:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)resourceRepairIdentifier:(id)arg1 finishedWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)libraryBecameUnavailable:(id)arg1 reason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
@end
