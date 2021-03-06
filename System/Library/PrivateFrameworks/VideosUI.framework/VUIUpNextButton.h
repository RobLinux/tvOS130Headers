/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIButton.h>
#import <VideosUI/VUIUpNextButtonProtocol.h>

@class VUIUpNextButtonProperties, NSString;

@interface VUIUpNextButton : VUIButton <VUIUpNextButtonProtocol> {

	VUIUpNextButtonProperties* _properties;

}

@property (nonatomic,retain) VUIUpNextButtonProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIUpNextButtonProperties *)properties;
-(void)setProperties:(VUIUpNextButtonProperties *)arg1 ;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)_selectButtonAction:(id)arg1 eventType:(id)arg2 ;
-(void)updateWithElement:(id)arg1 ;
-(void)upNextStateChangedToAdded;
-(void)upNextStateChangedToRemoved;
@end

