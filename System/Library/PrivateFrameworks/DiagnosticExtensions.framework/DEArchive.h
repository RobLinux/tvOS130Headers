/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticExtensions/DiagnosticExtensions-Structs.h>
@class NSURL;

@interface DEArchive : NSObject {

	archiveRef _archive;
	BOOL _hasClosedArchive;
	NSURL* _tarGzUrl;
	NSURL* _sourceDir;

}

@property (retain) NSURL * tarGzUrl;               //@synthesize tarGzUrl=_tarGzUrl - In the implementation block
@property (retain) NSURL * sourceDir;              //@synthesize sourceDir=_sourceDir - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(archiveRef)archiverForUrl:(id)arg1 ;
-(void)closeArchive;
-(BOOL)addFile:(id)arg1 withPathName:(id)arg2 ;
-(NSURL *)tarGzUrl;
-(void)setTarGzUrl:(NSURL *)arg1 ;
-(NSURL *)sourceDir;
-(void)setSourceDir:(NSURL *)arg1 ;
@end

