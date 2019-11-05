/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:58:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDiagnostics.app/TVDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DATestQueueDelegate;
@class NSMutableArray;

@interface DATestQueue : NSObject {

	BOOL _suspended;
	NSMutableArray* _testQueue;
	id<DATestQueueDelegate> _delegate;

}

@property (nonatomic,retain) NSMutableArray * testQueue;                           //@synthesize testQueue=_testQueue - In the implementation block
@property (assign,nonatomic,__weak) id<DATestQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL suspended;                                       //@synthesize suspended=_suspended - In the implementation block
+(id)testQueueWithDelegate:(id)arg1 ;
-(id<DATestQueueDelegate>)delegate;
-(void)setDelegate:(id<DATestQueueDelegate>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)setTestQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)testQueue;
-(void)enqueueTestWithTestAttributes:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_enqueueTestWithQueueEntry:(id)arg1 ;
-(void)_tickleTestQueue;
-(id)_dequeueTest;
@end

