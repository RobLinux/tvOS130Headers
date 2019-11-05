/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOTextItemContainer.h>
@class NSArray;


@protocol GEOTextItemContainer
@property (nonatomic,readonly) id<GEOTextItemDisplayConfig> displayConfig; 
@property (nonatomic,readonly) NSArray * textItems; 
@required
-(NSArray *)textItems;
-(id<GEOTextItemDisplayConfig>)displayConfig;

@end


@protocol GEOTextItemDisplayConfig;
@class NSArray;

@interface GEOTextItemContainer : NSObject <GEOTextItemContainer> {

	id<GEOTextItemDisplayConfig> _displayConfig;
	NSArray* _textItems;

}

@property (nonatomic,readonly) id<GEOTextItemDisplayConfig> displayConfig;              //@synthesize displayConfig=_displayConfig - In the implementation block
@property (nonatomic,readonly) NSArray * textItems;                                     //@synthesize textItems=_textItems - In the implementation block
-(id)init;
-(id)initWithTextItemContainer:(id)arg1 ;
-(NSArray *)textItems;
-(id)initWithDisplayConfig:(id)arg1 textItems:(id)arg2 ;
-(id<GEOTextItemDisplayConfig>)displayConfig;
@end

