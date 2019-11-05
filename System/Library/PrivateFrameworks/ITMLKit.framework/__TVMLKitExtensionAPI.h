/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol __TVMLKitExtensionAPI <JSExport>
@property (readonly) int TopShelfContentStyleInset; 
@property (readonly) int TopShelfContentStyleSectioned; 
@property (readonly) int ContentItemImageShapeNone; 
@property (readonly) int ContentItemImageShapePoster; 
@property (readonly) int ContentItemImageShapeSquare; 
@property (readonly) int ContentItemImageShapeSDTV; 
@property (readonly) int ContentItemImageShapeHDTV; 
@property (readonly) int ContentItemImageShapeWide; 
@property (readonly) int ContentItemImageShapeExtraWide; 
@required
-(void)noteTopShelfDataChanged;
-(CGSize*)topShelfImageSizeForShape:(int)arg1 :(int)arg2;
-(int)TopShelfContentStyleInset;
-(int)TopShelfContentStyleSectioned;
-(int)ContentItemImageShapeNone;
-(int)ContentItemImageShapePoster;
-(int)ContentItemImageShapeSquare;
-(int)ContentItemImageShapeSDTV;
-(int)ContentItemImageShapeHDTV;
-(int)ContentItemImageShapeWide;
-(int)ContentItemImageShapeExtraWide;

@end

