/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PXPhotosDetailsAssetsSpec;

@interface PXPhotosDetailsAssetsSpecManager : PXFeatureSpecManager {

	unsigned long long _detailsOptions;

}

@property (nonatomic,readonly) PXPhotosDetailsAssetsSpec * spec; 
@property (nonatomic,readonly) unsigned long long detailsOptions;              //@synthesize detailsOptions=_detailsOptions - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)detailsOptions;
-(id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2 ;
-(id)createSpec;
-(Class)specClass;
@end

