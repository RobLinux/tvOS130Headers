/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString;

@interface TDMicaRenditionSpec : TDRenditionSpec

@property (nonatomic,copy) NSString * layerPath; 
@property (assign,nonatomic) BOOL isTintable; 
-(id)debugDescription;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)_logError:(id)arg1 ;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(void)_logWarning:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
@end

