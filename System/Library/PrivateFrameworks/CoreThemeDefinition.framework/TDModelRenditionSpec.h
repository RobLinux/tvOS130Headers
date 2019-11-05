/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDModelAsset, NSSet;

@interface TDModelRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) TDModelAsset * asset; 
@property (nonatomic,retain) NSSet * childRenditions; 
@property (assign,nonatomic) int modelAssetIndex; 
+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)processModelObjectsInDocument:(id)arg1 ;
-(void)processMesh:(id)arg1 withAssetMeshIndex:(unsigned*)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4 ;
@end

