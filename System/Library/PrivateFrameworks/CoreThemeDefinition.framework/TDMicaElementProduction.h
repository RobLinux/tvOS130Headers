/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDElementProduction.h>
#import <CoreThemeDefinition/TDElementAttributes.h>

@class TDMicaAsset;

@interface TDMicaElementProduction : TDElementProduction <TDElementAttributes>

@property (nonatomic,retain) TDMicaAsset * asset; 
-(void)dealloc;
-(id)relativePath;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(id)baseKeySpec;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(id)associatedFileURLWithDocument:(id)arg1 ;
-(BOOL)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id*)arg3 ;
-(void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
@end
