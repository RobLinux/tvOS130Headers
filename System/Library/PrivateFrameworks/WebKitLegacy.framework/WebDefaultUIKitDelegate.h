/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebDefaultUIKitDelegate : NSObject
+(id)sharedUIKitDelegate;
-(void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3 ;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 configuration:(id)arg3 ;
-(void)webViewDidPreventDefaultForEvent:(id)arg1 ;
-(void)webViewDidReceiveMobileDocType:(id)arg1 ;
-(void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2 ;
-(void)revealedSelectionByScrollingWebFrame:(id)arg1 ;
-(void)webViewDidStartOverflowScroll:(id)arg1 ;
-(void)webViewDidEndOverflowScroll:(id)arg1 ;
-(void)webView:(id)arg1 elementDidFocusNode:(id)arg2 ;
-(void)webView:(id)arg1 elementDidBlurNode:(id)arg2 ;
-(void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2 ;
-(void)webViewDidCommitCompositingLayerChanges:(id)arg1 ;
-(void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7 ;
-(void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4 ;
-(CGPoint)interactionLocation;
-(void)showPlaybackTargetPicker:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 willCloseFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(CGPoint)contentsPointForWebView:(id)arg1 ;
-(CGRect)documentVisibleRectForWebView:(id)arg1 ;
-(void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4 ;
-(BOOL)webView:(id)arg1 shouldScrollToPoint:(CGPoint)arg2 forFrame:(id)arg3 ;
-(void)webViewDidRestoreFromPageCache:(id)arg1 ;
-(id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3 ;
-(void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2 ;
-(void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveMessage:(id)arg2 ;
-(BOOL)handleKeyTextCommandForCurrentEvent;
-(BOOL)handleKeyAppCommandForCurrentEvent;
-(void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(void)deleteFromInput;
-(void)deleteFromInputWithFlags:(unsigned long long)arg1 ;
-(void)webViewDidLayout:(id)arg1 ;
-(id)checkSpellingOfString:(id)arg1 ;
-(void)writeDataToPasteboard:(id)arg1 ;
-(id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2 ;
-(long long)getPasteboardItemsCount;
-(int)deviceOrientation;
-(BOOL)hasRichlyEditableSelection;
-(BOOL)performsTwoStepPaste:(id)arg1 ;
-(BOOL)performTwoStepDrop:(id)arg1 atDestination:(id)arg2 isMove:(BOOL)arg3 ;
-(long long)getPasteboardChangeCount;
-(BOOL)isUnperturbedDictationResultMarker:(id)arg1 ;
-(void)webView:(id)arg1 willAddPlugInView:(id)arg2 ;
-(void)webViewDidDrawTiles:(id)arg1 ;
@end

