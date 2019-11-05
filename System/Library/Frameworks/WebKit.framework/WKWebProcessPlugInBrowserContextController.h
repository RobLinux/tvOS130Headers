/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, WKDOMDocument, WKDOMRange, WKWebProcessPlugInFrame, WKWebProcessPlugInPageGroup, NSString;

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPage> _page;
	WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate> > _loadDelegate;
	WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate> > _formDelegate;
	WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate> > _editingDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;

}

@property (nonatomic,readonly) OpaqueWKBundlePageRef _bundlePageRef; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (setter=_setFormDelegate:,__weak) id<WKWebProcessPlugInFormDelegatePrivate> _formDelegate; 
@property (setter=_setEditingDelegate:,__weak) id<WKWebProcessPlugInEditingDelegate> _editingDelegate; 
@property (assign,setter=_setDefersLoading:,nonatomic) BOOL _defersLoading; 
@property (nonatomic,readonly) BOOL _usesNonPersistentWebsiteDataStore; 
@property (readonly) WKDOMDocument * mainFrameDocument; 
@property (readonly) WKDOMRange * selectedRange; 
@property (readonly) WKWebProcessPlugInFrame * mainFrame; 
@property (readonly) WKWebProcessPlugInPageGroup * pageGroup; 
@property (__weak) id<WKWebProcessPlugInLoadDelegate> loadDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)lookUpBrowsingContextFromHandle:(id)arg1 ;
-(void)dealloc;
-(WKBrowsingContextHandle *)handle;
-(WKDOMRange *)selectedRange;
-(WKWebProcessPlugInFrame *)mainFrame;
-(id<WKWebProcessPlugInFormDelegatePrivate>)_formDelegate;
-(void)_setFormDelegate:(id)arg1 ;
-(WKDOMDocument *)mainFrameDocument;
-(Object*)_apiObject;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(id<WKWebProcessPlugInLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<WKWebProcessPlugInLoadDelegate>)arg1 ;
-(WKWebProcessPlugInPageGroup *)pageGroup;
-(id<WKWebProcessPlugInEditingDelegate>)_editingDelegate;
-(OpaqueWKBundlePageRef)_bundlePageRef;
-(void)_setEditingDelegate:(id)arg1 ;
-(BOOL)_defersLoading;
-(void)_setDefersLoading:(BOOL)arg1 ;
-(BOOL)_usesNonPersistentWebsiteDataStore;
@end

