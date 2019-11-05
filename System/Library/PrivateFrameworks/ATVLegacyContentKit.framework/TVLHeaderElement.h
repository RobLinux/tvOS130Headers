/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement;

@interface TVLHeaderElement : TVLElement {

	NSString* _title;
	NSString* _subtitle;
	TVLImageElement* _image;
	long long _horizontalAlignment;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;              //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(TVLImageElement *)image;
-(void)setImage:(TVLImageElement *)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(long long)horizontalAlignment;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

