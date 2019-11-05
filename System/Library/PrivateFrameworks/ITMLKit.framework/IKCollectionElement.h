/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKAppBrowserBridge, IKHeaderElement;

@interface IKCollectionElement : IKViewElement {

	NSArray* _sections;
	IKAppBrowserBridge* _browserBridge;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * sections; 
@property (nonatomic,readonly) IKAppBrowserBridge * browserBridge;              //@synthesize browserBridge=_browserBridge - In the implementation block
+(id)supportedFeaturesForElementName:(id)arg1 ;
-(NSArray *)sections;
-(IKHeaderElement *)header;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(IKAppBrowserBridge *)browserBridge;
@end
