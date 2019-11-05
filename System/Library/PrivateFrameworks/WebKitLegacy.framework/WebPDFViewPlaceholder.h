/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebCore/WAKView.h>
#import <WebKitLegacy/WebPDFDocumentView.h>
#import <WebKitLegacy/WebPDFDocumentRepresentation.h>

@protocol WebPDFViewPlaceholderDelegate;
@class NSString, NSArray, WebDataSource, NSObject;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {

	NSString* _title;
	NSArray* _pageRects;
	NSArray* _pageYOrigins;
	CGPDFDocumentRef _document;
	WebDataSource* _dataSource;
	NSObject*<WebPDFViewPlaceholderDelegate> _delegate;
	BOOL _didFinishLoad;
	CGSize _containerSize;
	BOOL _didCompleteLayout;

}

@property (retain) NSArray * pageRects;                                            //@synthesize pageRects=_pageRects - In the implementation block
@property (retain) NSArray * pageYOrigins;                                         //@synthesize pageYOrigins=_pageYOrigins - In the implementation block
@property (retain) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (assign) NSObject*<WebPDFViewPlaceholderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) CGPDFDocumentRef document;                                    //@synthesize document=_document - In the implementation block
@property (readonly) CGPDFDocumentRef doc; 
@property (readonly) unsigned long long totalPages; 
@property (assign) CGSize containerSize;                                           //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) BOOL didCompleteLayout;                             //@synthesize didCompleteLayout=_didCompleteLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedMIMETypes;
+(Class)_representationClassForWebFrame:(id)arg1 ;
+(void)setAsPDFDocRepAndView;
-(void)dealloc;
-(NSObject*<WebPDFViewPlaceholderDelegate>)delegate;
-(void)setDelegate:(NSObject*<WebPDFViewPlaceholderDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)layout;
-(void)setDataSource:(id)arg1 ;
-(CGPDFDocumentRef)document;
-(void)finishedLoadingWithDataSource:(id)arg1 ;
-(void)receivedData:(id)arg1 withDataSource:(id)arg2 ;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)receivedError:(id)arg1 withDataSource:(id)arg2 ;
-(void)viewWillMoveToHostWindow:(id)arg1 ;
-(void)viewDidMoveToHostWindow;
-(BOOL)canProvideDocumentSource;
-(id)documentSource;
-(NSArray *)pageRects;
-(unsigned long long)totalPages;
-(CGPDFDocumentRef)doc;
-(CGRect)rectForPageNumber:(unsigned long long)arg1 ;
-(void)setDocument:(CGPDFDocumentRef)arg1 ;
-(void)setPageRects:(NSArray *)arg1 ;
-(void)setPageYOrigins:(NSArray *)arg1 ;
-(void)_updateTitleForURL:(id)arg1 ;
-(BOOL)didCompleteLayout;
-(void)_notifyDidCompleteLayout;
-(CGSize)_computePageRects:(CGPDFDocumentRef)arg1 ;
-(void)_updateTitleForDocumentIfAvailable;
-(void)_evaluateJSForDocument:(CGPDFDocumentRef)arg1 ;
-(void)_doPostLoadOrUnlockTasks;
-(CGRect)_getPDFPageBounds:(CGPDFPageRef)arg1 ;
-(void)clearDocument;
-(void)didUnlockDocument;
-(void)simulateClickOnLinkToURL:(id)arg1 ;
-(NSArray *)pageYOrigins;
-(CGSize)containerSize;
-(void)setContainerSize:(CGSize)arg1 ;
@end
