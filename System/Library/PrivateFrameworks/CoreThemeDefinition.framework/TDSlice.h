/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class TDElementProduction, TDRenditionSpec, NSString;

@interface TDSlice : NSManagedObject {

	CGRect _sliceRect;

}

@property (nonatomic,retain) TDElementProduction * production; 
@property (nonatomic,retain) TDRenditionSpec * rendition; 
@property (assign,nonatomic) CGRect sliceRect; 
@property (assign,nonatomic) CGRect primitiveSliceRect; 
@property (nonatomic,retain) NSString * sliceRectString; 
-(void)awakeFromFetch;
-(CGRect)primitiveSliceRect;
-(void)setPrimitiveSliceRect:(CGRect)arg1 ;
-(void)setSliceRect:(CGRect)arg1 ;
-(CGRect)sliceRect;
@end

