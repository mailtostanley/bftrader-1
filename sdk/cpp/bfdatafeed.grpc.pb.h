// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: bfdatafeed.proto
#ifndef GRPC_bfdatafeed_2eproto__INCLUDED
#define GRPC_bfdatafeed_2eproto__INCLUDED

#include "bfdatafeed.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace bftrader {
namespace bfdatafeed {

class BfDatafeedService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status InsertTick(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncInsertTick(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncInsertTickRaw(context, request, cq));
    }
    virtual ::grpc::Status InsertBar(::grpc::ClientContext* context, const ::bftrader::BfBarData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncInsertBar(::grpc::ClientContext* context, const ::bftrader::BfBarData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncInsertBarRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::bftrader::BfTickData>> GetTickPack(::grpc::ClientContext* context, const ::bftrader::BfGetTickReq& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::bftrader::BfTickData>>(GetTickPackRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::bftrader::BfTickData>> AsyncGetTickPack(::grpc::ClientContext* context, const ::bftrader::BfGetTickReq& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::bftrader::BfTickData>>(AsyncGetTickPackRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::bftrader::BfBarData>> GetBar(::grpc::ClientContext* context, const ::bftrader::BfGetBarReq& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::bftrader::BfBarData>>(GetBarRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::bftrader::BfBarData>> AsyncGetBar(::grpc::ClientContext* context, const ::bftrader::BfGetBarReq& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::bftrader::BfBarData>>(AsyncGetBarRaw(context, request, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncInsertTickRaw(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncInsertBarRaw(::grpc::ClientContext* context, const ::bftrader::BfBarData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::bftrader::BfTickData>* GetTickPackRaw(::grpc::ClientContext* context, const ::bftrader::BfGetTickReq& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::bftrader::BfTickData>* AsyncGetTickPackRaw(::grpc::ClientContext* context, const ::bftrader::BfGetTickReq& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientReaderInterface< ::bftrader::BfBarData>* GetBarRaw(::grpc::ClientContext* context, const ::bftrader::BfGetBarReq& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::bftrader::BfBarData>* AsyncGetBarRaw(::grpc::ClientContext* context, const ::bftrader::BfGetBarReq& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status InsertTick(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncInsertTick(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncInsertTickRaw(context, request, cq));
    }
    ::grpc::Status InsertBar(::grpc::ClientContext* context, const ::bftrader::BfBarData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncInsertBar(::grpc::ClientContext* context, const ::bftrader::BfBarData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncInsertBarRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::bftrader::BfTickData>> GetTickPack(::grpc::ClientContext* context, const ::bftrader::BfGetTickReq& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::bftrader::BfTickData>>(GetTickPackRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::bftrader::BfTickData>> AsyncGetTickPack(::grpc::ClientContext* context, const ::bftrader::BfGetTickReq& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::bftrader::BfTickData>>(AsyncGetTickPackRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReader< ::bftrader::BfBarData>> GetBar(::grpc::ClientContext* context, const ::bftrader::BfGetBarReq& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::bftrader::BfBarData>>(GetBarRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::bftrader::BfBarData>> AsyncGetBar(::grpc::ClientContext* context, const ::bftrader::BfGetBarReq& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::bftrader::BfBarData>>(AsyncGetBarRaw(context, request, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncInsertTickRaw(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncInsertBarRaw(::grpc::ClientContext* context, const ::bftrader::BfBarData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::bftrader::BfTickData>* GetTickPackRaw(::grpc::ClientContext* context, const ::bftrader::BfGetTickReq& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::bftrader::BfTickData>* AsyncGetTickPackRaw(::grpc::ClientContext* context, const ::bftrader::BfGetTickReq& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::bftrader::BfBarData>* GetBarRaw(::grpc::ClientContext* context, const ::bftrader::BfGetBarReq& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::bftrader::BfBarData>* AsyncGetBarRaw(::grpc::ClientContext* context, const ::bftrader::BfGetBarReq& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_InsertTick_;
    const ::grpc::RpcMethod rpcmethod_InsertBar_;
    const ::grpc::RpcMethod rpcmethod_GetTickPack_;
    const ::grpc::RpcMethod rpcmethod_GetBar_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status InsertTick(::grpc::ServerContext* context, const ::bftrader::BfTickData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status InsertBar(::grpc::ServerContext* context, const ::bftrader::BfBarData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status GetTickPack(::grpc::ServerContext* context, const ::bftrader::BfGetTickReq* request, ::grpc::ServerWriter< ::bftrader::BfTickData>* writer);
    virtual ::grpc::Status GetBar(::grpc::ServerContext* context, const ::bftrader::BfGetBarReq* request, ::grpc::ServerWriter< ::bftrader::BfBarData>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_InsertTick : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_InsertTick() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_InsertTick() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InsertTick(::grpc::ServerContext* context, const ::bftrader::BfTickData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInsertTick(::grpc::ServerContext* context, ::bftrader::BfTickData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_InsertBar : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_InsertBar() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_InsertBar() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InsertBar(::grpc::ServerContext* context, const ::bftrader::BfBarData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInsertBar(::grpc::ServerContext* context, ::bftrader::BfBarData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetTickPack : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_GetTickPack() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetTickPack() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTickPack(::grpc::ServerContext* context, const ::bftrader::BfGetTickReq* request, ::grpc::ServerWriter< ::bftrader::BfTickData>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTickPack(::grpc::ServerContext* context, ::bftrader::BfGetTickReq* request, ::grpc::ServerAsyncWriter< ::bftrader::BfTickData>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(2, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetBar : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_GetBar() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_GetBar() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetBar(::grpc::ServerContext* context, const ::bftrader::BfGetBarReq* request, ::grpc::ServerWriter< ::bftrader::BfBarData>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetBar(::grpc::ServerContext* context, ::bftrader::BfGetBarReq* request, ::grpc::ServerAsyncWriter< ::bftrader::BfBarData>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(3, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_InsertTick<WithAsyncMethod_InsertBar<WithAsyncMethod_GetTickPack<WithAsyncMethod_GetBar<Service > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_InsertTick : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_InsertTick() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_InsertTick() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InsertTick(::grpc::ServerContext* context, const ::bftrader::BfTickData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_InsertBar : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_InsertBar() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_InsertBar() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InsertBar(::grpc::ServerContext* context, const ::bftrader::BfBarData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetTickPack : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_GetTickPack() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetTickPack() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTickPack(::grpc::ServerContext* context, const ::bftrader::BfGetTickReq* request, ::grpc::ServerWriter< ::bftrader::BfTickData>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetBar : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_GetBar() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_GetBar() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetBar(::grpc::ServerContext* context, const ::bftrader::BfGetBarReq* request, ::grpc::ServerWriter< ::bftrader::BfBarData>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace bfdatafeed
}  // namespace bftrader


#endif  // GRPC_bfdatafeed_2eproto__INCLUDED
