/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCMMLayoutGenerator : PXLayoutGenerator
+(id)layoutGeneratorForLayoutType:(long long)arg1 withReferenceSize:(CGSize)arg2 additionalTileCount:(unsigned long long)arg3 headerHeight:(double)arg4 itemSize:(CGSize)arg5 interItemSpacing:(CGSize)arg6 contentInsets:(UIEdgeInsets)arg7 ;
+(id)_defaultGridLayoutGeneratorWithReferenceSize:(CGSize)arg1 additionalTileCount:(unsigned long long)arg2 headerHeight:(double)arg3 itemSize:(CGSize)arg4 interItemSpacing:(CGSize)arg5 contentInsets:(UIEdgeInsets)arg6 ;
+(id)_gridLayoutGeneratorWithReferenceSize:(CGSize)arg1 columnCount:(unsigned long long)arg2 additionalTileCount:(unsigned long long)arg3 headerHeight:(double)arg4 interItemSpacing:(CGSize)arg5 ;
+(id)_defaultEditorialLayoutGeneratorWithReferenceSize:(CGSize)arg1 headerHeight:(double)arg2 interItemSpacing:(CGSize)arg3 ;
@end

