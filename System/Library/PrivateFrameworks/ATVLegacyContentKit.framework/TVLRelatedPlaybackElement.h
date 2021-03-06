/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class TVLUpNextItemElement, NSString, TVLMenuElement;

@interface TVLRelatedPlaybackElement : TVLRootElement {

	TVLUpNextItemElement* _upNextItem;
	NSString* _endTitle;
	TVLMenuElement* _optionsMenu;

}

@property (nonatomic,retain) TVLUpNextItemElement * upNextItem;              //@synthesize upNextItem=_upNextItem - In the implementation block
@property (nonatomic,retain) NSString * endTitle;                            //@synthesize endTitle=_endTitle - In the implementation block
@property (nonatomic,retain) TVLMenuElement * optionsMenu;                   //@synthesize optionsMenu=_optionsMenu - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(TVLUpNextItemElement *)upNextItem;
-(NSString *)endTitle;
-(TVLMenuElement *)optionsMenu;
-(void)setUpNextItem:(TVLUpNextItemElement *)arg1 ;
-(void)setEndTitle:(NSString *)arg1 ;
-(void)setOptionsMenu:(TVLMenuElement *)arg1 ;
@end

