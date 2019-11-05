/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSString, NSNumber;

@interface CITextImageGenerator : CIFilter {

	NSString* inputText;
	NSString* inputFontName;
	NSNumber* inputFontSize;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) NSString * inputText; 
@property (nonatomic,retain) NSString * inputFontName; 
@property (nonatomic,retain) NSNumber * inputFontSize; 
@property (nonatomic,retain) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(id)outputImage;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(NSString *)inputText;
-(void)setInputText:(NSString *)arg1 ;
-(NSString *)inputFontName;
-(void)setInputFontName:(NSString *)arg1 ;
-(NSNumber *)inputFontSize;
-(void)setInputFontSize:(NSNumber *)arg1 ;
@end
