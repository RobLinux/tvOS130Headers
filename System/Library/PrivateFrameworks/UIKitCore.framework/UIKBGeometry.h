/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCoding.h>
#import <UIKitCore/NSCopying.h>

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {

	NSString* m_name;
	SCD_Struct_UI78 m_x;
	SCD_Struct_UI78 m_y;
	SCD_Struct_UI78 m_w;
	SCD_Struct_UI78 m_h;
	SCD_Struct_UI78 m_paddingTop;
	SCD_Struct_UI78 m_paddingLeft;
	SCD_Struct_UI78 m_paddingBottom;
	SCD_Struct_UI78 m_paddingRight;
	BOOL m_explicitlySpecified;
	BOOL m_isTemplate;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,setter=setX:,nonatomic) SCD_Struct_UI78 x; 
@property (assign,setter=setY:,nonatomic) SCD_Struct_UI78 y; 
@property (assign,setter=setW:,nonatomic) SCD_Struct_UI78 w; 
@property (assign,setter=setH:,nonatomic) SCD_Struct_UI78 h; 
@property (assign,setter=setPaddingTop:,nonatomic) SCD_Struct_UI78 paddingTop; 
@property (assign,setter=setPaddingLeft:,nonatomic) SCD_Struct_UI78 paddingLeft; 
@property (assign,setter=setPaddingBottom:,nonatomic) SCD_Struct_UI78 paddingBottom; 
@property (assign,setter=setPaddingRight:,nonatomic) SCD_Struct_UI78 paddingRight; 
@property (assign,nonatomic) BOOL explicitlySpecified; 
@property (assign,nonatomic) BOOL isTemplate; 
+(id)geometry;
+(id)geometryWithRect:(CGRect)arg1 ;
+(id)geometryWithOriginValue:(SCD_Struct_UI78)arg1 sizeValue:(SCD_Struct_UI78)arg2 ;
+(id)codeStringForValue:(SCD_Struct_UI78)arg1 ;
+(void)performOperations:(/*^block*/id)arg1 withScale:(double)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGRect)frame;
-(BOOL)isTemplate;
-(SCD_Struct_UI78)x;
-(void)setX:(SCD_Struct_UI78)arg1 ;
-(SCD_Struct_UI78)y;
-(void)setY:(SCD_Struct_UI78)arg1 ;
-(SCD_Struct_UI78)w;
-(void)setW:(SCD_Struct_UI78)arg1 ;
-(SCD_Struct_UI78)h;
-(void)setH:(SCD_Struct_UI78)arg1 ;
-(id)shortDescription;
-(void)setIsTemplate:(BOOL)arg1 ;
-(SCD_Struct_UI78)paddingTop;
-(void)setPaddingTop:(SCD_Struct_UI78)arg1 ;
-(SCD_Struct_UI78)paddingRight;
-(void)setPaddingRight:(SCD_Struct_UI78)arg1 ;
-(SCD_Struct_UI78)paddingBottom;
-(void)setPaddingBottom:(SCD_Struct_UI78)arg1 ;
-(SCD_Struct_UI78)paddingLeft;
-(void)setPaddingLeft:(SCD_Struct_UI78)arg1 ;
-(void)setExplicitlySpecified:(BOOL)arg1 ;
-(BOOL)usesAutomaticMetrics;
-(BOOL)explicitlySpecified;
-(id)initWithName:(id)arg1 rect:(SCD_Struct_UI79)arg2 padding:(SCD_Struct_UI79)arg3 ;
-(CGRect)frameWithContainingFrame:(CGRect)arg1 ;
-(CGRect)paddedFrameWithResolvedFrame:(CGRect)arg1 ;
-(id)initTemplateWithName:(id)arg1 rect:(SCD_Struct_UI79)arg2 padding:(SCD_Struct_UI79)arg3 ;
-(CGRect)paddedFrameWithContainingFrame:(CGRect)arg1 ;
-(id)overrideGeometry:(id)arg1 ;
-(BOOL)usesPercentages;
@end
