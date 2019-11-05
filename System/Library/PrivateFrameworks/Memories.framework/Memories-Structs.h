/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_Mi0;

typedef struct {
	SCD_Struct_Mi0 field1;
	SCD_Struct_Mi0 field2;
} SCD_Struct_Mi1;

typedef struct CGContext* CGContextRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_TV3;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	SCD_Struct_TV3 start;
	SCD_Struct_TV3 duration;
} SCD_Struct_VE7;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct _compressed_pair<double *, std::__1::allocator<double> > {
	double __value_;
} compressed_pair<double *, std::__1::allocator<double> >;

typedef struct vector<double, std::__1::allocator<double> > {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double> > __end_cap_;
} vector<double, std::__1::allocator<double> >;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct rusage {
	timeval ru_utime;
	timeval ru_stime;
	long long ru_maxrss;
	long long ru_ixrss;
	long long ru_idrss;
	long long ru_isrss;
	long long ru_minflt;
	long long ru_majflt;
	long long ru_nswap;
	long long ru_inblock;
	long long ru_oublock;
	long long ru_msgsnd;
	long long ru_msgrcv;
	long long ru_nsignals;
	long long ru_nvcsw;
	long long ru_nivcsw;
} rusage;

typedef struct _NSZone* NSZoneRef;

typedef struct Buckets {
	long long shortCount;
	long long mediumCount;
	long long longCount;
	double shortDuration;
	double mediumDuration;
	double longDuration;
	int defaultBucketIsNotShort;
} Buckets;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_Mi18;

typedef struct _compressed_pair<int *, std::__1::allocator<int> > {
	int __value_;
} compressed_pair<int *, std::__1::allocator<int> >;

typedef struct vector<int, std::__1::allocator<int> > {
	int __begin_;
	int __end_;
	compressed_pair<int *, std::__1::allocator<int> > __end_cap_;
} vector<int, std::__1::allocator<int> >;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGImage* CGImageRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	long long _start;
	long long _duration;
} SCD_Struct_Ra24;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_Sp25;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

