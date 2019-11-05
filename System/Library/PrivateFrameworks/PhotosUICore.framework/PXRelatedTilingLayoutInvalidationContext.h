/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXTilingLayoutInvalidationContext.h>

@class PXRelatedDataSource;

@interface PXRelatedTilingLayoutInvalidationContext : PXTilingLayoutInvalidationContext {

	PXRelatedDataSource* _fromDataSource;
	PXRelatedDataSource* _toDataSource;

}

@property (nonatomic,retain) PXRelatedDataSource * fromDataSource;              //@synthesize fromDataSource=_fromDataSource - In the implementation block
@property (nonatomic,retain) PXRelatedDataSource * toDataSource;                //@synthesize toDataSource=_toDataSource - In the implementation block
-(PXRelatedDataSource *)fromDataSource;
-(void)setFromDataSource:(PXRelatedDataSource *)arg1 ;
-(PXRelatedDataSource *)toDataSource;
-(void)setToDataSource:(PXRelatedDataSource *)arg1 ;
@end

