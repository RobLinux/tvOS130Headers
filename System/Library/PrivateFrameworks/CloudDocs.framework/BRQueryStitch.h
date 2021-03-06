/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, BRFileObjectID, NSURL;

@interface BRQueryStitch : NSObject {

	NSArray* _contexts;
	BRFileObjectID* _objid;
	char _kind;
	NSURL* _fromURL;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * fromURL;                 //@synthesize fromURL=_fromURL - In the implementation block
@property (nonatomic,retain) NSArray * contexts;              //@synthesize contexts=_contexts - In the implementation block
-(id)description;
-(void)dealloc;
-(NSArray *)contexts;
-(void)done;
-(void)setContexts:(NSArray *)arg1 ;
-(void)setQueries:(id)arg1 ;
-(void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
-(void)_deletionDone;
-(void)_creationDone;
-(void)_renameDone;
-(id)initWithURL:(id)arg1 objid:(id)arg2 kind:(char)arg3 ;
-(NSURL *)fromURL;
-(void)setFromURL:(NSURL *)arg1 ;
@end

