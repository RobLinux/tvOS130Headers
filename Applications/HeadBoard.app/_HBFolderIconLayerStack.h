/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HeadBoard-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@class NSArray, UIImage, NSString;

@interface _HBFolderIconLayerStack : NSObject <UINamedLayerStack> {

	NSArray* _layers;
	UIImage* _flattenedUIImage;
	UIImage* _radiosityUIImage;

}

@property (getter=_flattenedUIImage,nonatomic,readonly) UIImage * flattenedUIImage;              //@synthesize flattenedUIImage=_flattenedUIImage - In the implementation block
@property (getter=_radiosityUIImage,nonatomic,readonly) UIImage * radiosityUIImage;              //@synthesize radiosityUIImage=_radiosityUIImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers;                                                 //@synthesize layers=_layers - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
-(NSString *)name;
-(CGSize)size;
-(double)scale;
-(NSArray *)layers;
-(CGImageRef)flattenedImage;
-(id)radiosityImage;
-(id)_flattenedUIImage;
-(id)_radiosityUIImage;
-(id)initWithFolder:(id)arg1 ;
@end

