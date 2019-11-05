/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebView, WebNodeHighlight;

@interface WebNodeHighlighter : NSObject {

	WebView* _inspectedWebView;
	WebNodeHighlight* _currentHighlight;

}
-(void)dealloc;
-(id)initWithInspectedWebView:(id)arg1 ;
-(void)highlight;
-(void)hideHighlight;
-(void)didAttachWebNodeHighlight:(id)arg1 ;
-(void)willDetachWebNodeHighlight:(id)arg1 ;
@end

