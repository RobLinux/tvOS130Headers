/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSData;

@interface MKTileOverlayTile : NSObject {

	SCD_Struct_MK44 _path;
	SCD_Struct_MK1 _frame;
	double _scale;
	NSData* _image;

}

@property (assign,nonatomic) SCD_Struct_MK44 path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK1 frame;              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double scale;                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * image;                    //@synthesize image=_image - In the implementation block
-(id)description;
-(SCD_Struct_MK44)path;
-(void)setPath:(SCD_Struct_MK44)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(SCD_Struct_MK1)frame;
-(void)setFrame:(SCD_Struct_MK1)arg1 ;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
@end

