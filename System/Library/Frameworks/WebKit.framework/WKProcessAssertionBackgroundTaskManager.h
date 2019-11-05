/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKProcessAssertionBackgroundTaskManager : NSObject {

	unsigned long long _backgroundTask;
	HashSet<WebKit::ProcessAndUIAssertion *, WTF::PtrHash<WebKit::ProcessAndUIAssertion *>, WTF::HashTraits<WebKit::ProcessAndUIAssertion *> >* _assertionsNeedingBackgroundTask;
	BOOL _applicationIsBackgrounded;
	/*^block*/id _pendingTaskReleaseTask;

}
+(id)shared;
-(id)init;
-(void)dealloc;
-(void)_cancelPendingReleaseTask;
-(void)_updateBackgroundTask;
-(void)_releaseBackgroundTask;
-(void)_notifyAssertionsOfImminentSuspension;
-(void)_scheduleReleaseTask;
-(void)addAssertionNeedingBackgroundTask:(ProcessAndUIAssertion*)arg1 ;
-(void)removeAssertionNeedingBackgroundTask:(ProcessAndUIAssertion*)arg1 ;
@end

