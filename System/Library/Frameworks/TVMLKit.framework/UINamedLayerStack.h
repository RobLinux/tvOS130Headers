/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol UINamedLayerStack <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
@optional
-(id)radiosityImage;
-(CGSize)radiosityImageScale;
-(BOOL)flatImageContainsCornerRadius;

@required
-(NSString *)name;
-(CGSize)size;
-(double)scale;
-(NSArray *)layers;
-(CGImageRef)flattenedImage;

@end

