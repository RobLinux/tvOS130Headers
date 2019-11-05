/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PXPhotosDetailsLoadCoordinator;

@interface PXPhotosDetailsLoadCoordinationToken : NSObject {

	BOOL _didComplete;
	PXPhotosDetailsLoadCoordinator* __loadCoordinator;

}

@property (nonatomic,__weak,readonly) PXPhotosDetailsLoadCoordinator * _loadCoordinator;              //@synthesize _loadCoordinator=__loadCoordinator - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_timeout;
-(void)complete;
-(id)_initWithLoadCoordinator:(id)arg1 ;
-(PXPhotosDetailsLoadCoordinator *)_loadCoordinator;
@end

