/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXDataSectionManager.h>

@protocol PXNavigationRoot;
@class PHPhotoLibrary;

@interface PXNavigationRootDataSourceManager : PXDataSectionManager {

	id<PXNavigationRoot> _navigationRoot;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) id<PXNavigationRoot> navigationRoot;              //@synthesize navigationRoot=_navigationRoot - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithNavigationRoot:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(id)createDataSection;
-(id<PXNavigationRoot>)navigationRoot;
@end
