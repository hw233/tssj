//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: sport.eproto
namespace dhc
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"sport_t")]
  public partial class sport_t : global::ProtoBuf.IExtensible
  {
    public sport_t() {}
    
    private ulong _guid = default(ulong);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong guid
    {
      get { return _guid; }
      set { _guid = value; }
    }
    private ulong _player_guid = default(ulong);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"player_guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong player_guid
    {
      get { return _player_guid; }
      set { _player_guid = value; }
    }
    private ulong _time = default(ulong);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"time", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong time
    {
      get { return _time; }
      set { _time = value; }
    }
    private int _type = default(int);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int type
    {
      get { return _type; }
      set { _type = value; }
    }
    private ulong _other_guid = default(ulong);
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"other_guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong other_guid
    {
      get { return _other_guid; }
      set { _other_guid = value; }
    }
    private byte[] _other_name = null;
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"other_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public byte[] other_name
    {
      get { return _other_name; }
      set { _other_name = value; }
    }
    private int _win = default(int);
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"win", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int win
    {
      get { return _win; }
      set { _win = value; }
    }
    private int _rank = default(int);
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"rank", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int rank
    {
      get { return _rank; }
      set { _rank = value; }
    }
    private byte[] _text = null;
    [global::ProtoBuf.ProtoMember(9, IsRequired = false, Name=@"text", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public byte[] text
    {
      get { return _text; }
      set { _text = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}