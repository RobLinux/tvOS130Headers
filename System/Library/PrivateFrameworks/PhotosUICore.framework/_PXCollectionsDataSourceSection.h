/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCollectionsDataSection.h>

@class PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {

	long long _count;
	PXCollectionsDataSource* _collectionsDataSource;

}

@property (nonatomic,readonly) PXCollectionsDataSource * collectionsDataSource;              //@synthesize collectionsDataSource=_collectionsDataSource - In the implementation block
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(id)content;
-(id)initWithCollectionsDataSource:(id)arg1 ;
-(long long)indexOfCollection:(id)arg1 ;
-(long long)countForCollection:(id)arg1 ;
-(PXCollectionsDataSource *)collectionsDataSource;
@end

